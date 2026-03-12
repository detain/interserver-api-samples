(ns inter-server-management-api.specs.create-rule-400-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-rule-400-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   (ds/opt :errors) (s/coll-of string?)
   })

(def create-rule-400-response-spec
  (ds/spec
    {:name ::create-rule-400-response
     :spec create-rule-400-response-data}))
