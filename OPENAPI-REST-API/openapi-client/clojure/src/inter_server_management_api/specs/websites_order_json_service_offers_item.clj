(ns inter-server-management-api.specs.websites-order-json-service-offers-item
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def websites-order-json-service-offers-item-data
  {
   (ds/opt :service_offer_id) string?
   (ds/opt :service_id) string?
   (ds/opt :intro_cost) int?
   (ds/opt :renewal_cost) int?
   (ds/opt :intro_frequency) string?
   (ds/opt :renewal_frequency) string?
   (ds/opt :allow_coupon) string?
   (ds/opt :service_module) string?
   (ds/opt :created_at) string?
   (ds/opt :updated_at) string?
   (ds/opt :deleted_at) string?
   (ds/opt :currencySymbol) string?
   })

(def websites-order-json-service-offers-item-spec
  (ds/spec
    {:name ::websites-order-json-service-offers-item
     :spec websites-order-json-service-offers-item-data}))
