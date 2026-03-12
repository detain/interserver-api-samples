(ns inter-server-management-api.specs.get-order-detail-200-response-service-types-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-order-detail-200-response-service-types-inner-data
  {
   (ds/opt :services_id) int?
   (ds/opt :services_name) string?
   (ds/opt :services_cost) int?
   (ds/opt :services_field1) string?
   (ds/opt :services_field2) string?
   (ds/opt :services_module) string?
   })

(def get-order-detail-200-response-service-types-inner-spec
  (ds/spec
    {:name ::get-order-detail-200-response-service-types-inner
     :spec get-order-detail-200-response-service-types-inner-data}))
