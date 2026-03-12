(ns inter-server-management-api.specs.create-filter
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def create-filter-data
  {
   (ds/req :filter_type) string?
   (ds/req :port) int?
   })

(def create-filter-spec
  (ds/spec
    {:name ::create-filter
     :spec create-filter-data}))
