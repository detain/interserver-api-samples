(ns inter-server-management-api.specs.service-category
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def service-category-data
  {
   (ds/req :category_id) int?
   (ds/req :category_name) string?
   (ds/req :category_tag) string?
   (ds/req :category_module) string?
   })

(def service-category-spec
  (ds/spec
    {:name ::service-category
     :spec service-category-data}))
