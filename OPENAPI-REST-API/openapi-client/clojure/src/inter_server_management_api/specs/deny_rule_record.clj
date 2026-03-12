(ns inter-server-management-api.specs.deny-rule-record
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def deny-rule-record-data
  {
   (ds/req :type) string?
   (ds/req :data) string?
   (ds/req :id) int?
   (ds/req :created) string?
   (ds/opt :user) string?
   })

(def deny-rule-record-spec
  (ds/spec
    {:name ::deny-rule-record
     :spec deny-rule-record-data}))
