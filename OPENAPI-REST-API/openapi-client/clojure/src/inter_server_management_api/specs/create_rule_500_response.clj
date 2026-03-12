(ns inter-server-management-api.specs.create-rule-500-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-rule-500-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   })

(def create-rule-500-response-spec
  (ds/spec
    {:name ::create-rule-500-response
     :spec create-rule-500-response-data}))
