(ns inter-server-management-api.specs.deny-rule-new
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def deny-rule-new-data
  {
   (ds/req :type) string?
   (ds/req :data) string?
   (ds/opt :user) string?
   })

(def deny-rule-new-spec
  (ds/spec
    {:name ::deny-rule-new
     :spec deny-rule-new-data}))
