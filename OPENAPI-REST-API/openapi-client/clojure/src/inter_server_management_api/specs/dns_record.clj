(ns inter-server-management-api.specs.dns-record
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.dns-record-type :refer :all]
            )
  (:import (java.io File)))


(def dns-record-data
  {
   (ds/req :id) string?
   (ds/req :domain_id) string?
   (ds/req :name) string?
   (ds/req :type) dns-record-type-spec
   (ds/req :content) string?
   (ds/req :ttl) string?
   (ds/req :prio) string?
   (ds/req :disabled) string?
   (ds/req :ordername) string?
   (ds/req :auth) string?
   })

(def dns-record-spec
  (ds/spec
    {:name ::dns-record
     :spec dns-record-data}))
