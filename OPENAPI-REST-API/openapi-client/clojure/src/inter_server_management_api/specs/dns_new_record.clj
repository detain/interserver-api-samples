(ns inter-server-management-api.specs.dns-new-record
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.dns-record-type :refer :all]
            )
  (:import (java.io File)))


(def dns-new-record-data
  {
   (ds/req :name) string?
   (ds/req :type) dns-record-type-spec
   (ds/req :content) string?
   (ds/opt :ttl) int?
   (ds/opt :prio) int?
   })

(def dns-new-record-spec
  (ds/spec
    {:name ::dns-new-record
     :spec dns-new-record-data}))
