(ns inter-server-management-api.specs.tickets
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.tickets-row :refer :all]
            [inter-server-management-api.specs.tickets-count-array :refer :all]
            )
  (:import (java.io File)))


(def tickets-data
  {
   (ds/req :ima) string?
   (ds/req :custid) string?
   (ds/req :view) string?
   (ds/req :currentPage) int?
   (ds/req :limit) int?
   (ds/req :sortcol) int?
   (ds/req :sortdir) int?
   (ds/req :rowsOffset) int?
   (ds/req :tickets) (s/coll-of tickets-row-spec)
   (ds/req :pages) int?
   (ds/req :rowsTotal) int?
   (ds/req :inboxCount) int?
   (ds/req :countArray) tickets-count-array-spec
   (ds/req :viewText) string?
   })

(def tickets-spec
  (ds/spec
    {:name ::tickets
     :spec tickets-data}))
