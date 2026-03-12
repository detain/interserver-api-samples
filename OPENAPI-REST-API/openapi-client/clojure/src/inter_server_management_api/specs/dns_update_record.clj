(ns inter-server-management-api.specs.dns-update-record
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.dns-record-type :refer :all]
            )
  (:import (java.io File)))


(def dns-update-record-data
  {
   (ds/opt :name) string?
   (ds/opt :type) dns-record-type-spec
   (ds/opt :content) string?
   (ds/opt :ttl) string?
   (ds/opt :prio) string?
   (ds/opt :disabled) string?
   (ds/opt :ordername) string?
   (ds/opt :auth) string?
   })

(def dns-update-record-spec
  (ds/spec
    {:name ::dns-update-record
     :spec dns-update-record-data}))
