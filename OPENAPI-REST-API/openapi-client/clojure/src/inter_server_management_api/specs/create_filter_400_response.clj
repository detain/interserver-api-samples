(ns inter-server-management-api.specs.create-filter-400-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-filter-400-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   (ds/opt :errors) (s/coll-of string?)
   })

(def create-filter-400-response-spec
  (ds/spec
    {:name ::create-filter-400-response
     :spec create-filter-400-response-data}))
