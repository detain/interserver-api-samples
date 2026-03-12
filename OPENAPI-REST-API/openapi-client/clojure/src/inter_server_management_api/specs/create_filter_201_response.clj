(ns inter-server-management-api.specs.create-filter-201-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-filter-201-response-data
  {
   (ds/opt :success) boolean?
   (ds/opt :text) string?
   })

(def create-filter-201-response-spec
  (ds/spec
    {:name ::create-filter-201-response
     :spec create-filter-201-response-data}))
