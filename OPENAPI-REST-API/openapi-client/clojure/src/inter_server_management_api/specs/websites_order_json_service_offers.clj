(ns inter-server-management-api.specs.websites-order-json-service-offers
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.websites-order-json-service-offers-item :refer :all]
            )
  (:import (java.io File)))


(def websites-order-json-service-offers-data
  {
   (ds/req :1026) (s/coll-of websites-order-json-service-offers-item-spec)
   })

(def websites-order-json-service-offers-spec
  (ds/spec
    {:name ::websites-order-json-service-offers
     :spec websites-order-json-service-offers-data}))
