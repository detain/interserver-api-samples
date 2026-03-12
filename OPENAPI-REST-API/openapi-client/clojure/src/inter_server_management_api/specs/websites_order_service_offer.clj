(ns inter-server-management-api.specs.websites-order-service-offer
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def websites-order-service-offer-data
  {
   (ds/req :service_offer_id) string?
   (ds/req :service_id) string?
   (ds/req :intro_cost) string?
   (ds/req :renewal_cost) string?
   (ds/req :intro_frequency) string?
   (ds/req :renewal_frequency) string?
   (ds/req :allow_coupon) string?
   (ds/req :service_module) string?
   (ds/req :created_at) string?
   (ds/opt :updated_at) string?
   (ds/opt :deleted_at) string?
   })

(def websites-order-service-offer-spec
  (ds/spec
    {:name ::websites-order-service-offer
     :spec websites-order-service-offer-data}))
