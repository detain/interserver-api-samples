(ns inter-server-management-api.specs.get-order-detail-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.get-order-detail-200-response-package-costs :refer :all]
            [inter-server-management-api.specs.get-order-detail-200-response-service-types-inner :refer :all]
            [inter-server-management-api.specs.get-order-detail-200-response-ips-inner :refer :all]
            )
  (:import (java.io File)))


(def get-order-detail-200-response-data
  {
   (ds/opt :packageCosts) get-order-detail-200-response-package-costs-spec
   (ds/opt :serviceTypes) (s/coll-of get-order-detail-200-response-service-types-inner-spec)
   (ds/opt :ips) (s/coll-of get-order-detail-200-response-ips-inner-spec)
   })

(def get-order-detail-200-response-spec
  (ds/spec
    {:name ::get-order-detail-200-response
     :spec get-order-detail-200-response-data}))
