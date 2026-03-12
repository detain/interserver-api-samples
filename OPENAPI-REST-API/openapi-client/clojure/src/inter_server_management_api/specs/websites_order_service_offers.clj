(ns inter-server-management-api.specs.websites-order-service-offers
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.websites-order-service-offer :refer :all]
            )
  (:import (java.io File)))


(def websites-order-service-offers-data
  {
   (ds/req :1026) (s/coll-of websites-order-service-offer-spec)
   })

(def websites-order-service-offers-spec
  (ds/spec
    {:name ::websites-order-service-offers
     :spec websites-order-service-offers-data}))
