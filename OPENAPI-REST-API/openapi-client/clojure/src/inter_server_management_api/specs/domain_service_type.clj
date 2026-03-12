(ns inter-server-management-api.specs.domain-service-type
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-service-type-data
  {
   (ds/opt :services_id) string?
   (ds/opt :services_name) string?
   (ds/opt :services_cost) string?
   (ds/opt :services_category) string?
   (ds/opt :services_buyable) string?
   (ds/opt :services_type) string?
   (ds/opt :services_field1) string?
   (ds/opt :services_field2) string?
   (ds/opt :services_module) string?
   })

(def domain-service-type-spec
  (ds/spec
    {:name ::domain-service-type
     :spec domain-service-type-data}))
