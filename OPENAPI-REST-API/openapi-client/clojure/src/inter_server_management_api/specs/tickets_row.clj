(ns inter-server-management-api.specs.tickets-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def tickets-row-data
  {
   (ds/req :title) string?
   (ds/req :ticketmaskid) string?
   (ds/req :lastreplier) string?
   (ds/req :status) string?
   (ds/req :priority) string?
   (ds/req :total_replies) int?
   (ds/req :lastactivity) string?
   (ds/req :departmenttitle) string?
   (ds/req :ticketid) int?
   (ds/req :can_close) string?
   (ds/req :attachments) any-type-spec
   (ds/req :status_text) string?
   (ds/req :checked) boolean?
   })

(def tickets-row-spec
  (ds/spec
    {:name ::tickets-row
     :spec tickets-row-data}))
