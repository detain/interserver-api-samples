(ns inter-server-management-api.specs.vps-order-service-types-32
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-service-types-32-data
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

(def vps-order-service-types-32-spec
  (ds/spec
    {:name ::vps-order-service-types-32
     :spec vps-order-service-types-32-data}))
