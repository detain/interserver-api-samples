(ns inter-server-management-api.specs.websites-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.websites-order-packages :refer :all]
            [inter-server-management-api.specs.websites-order-json-services :refer :all]
            [inter-server-management-api.specs.websites-order-json-service-offers :refer :all]
            [inter-server-management-api.specs.websites-order-service-types :refer :all]
            [inter-server-management-api.specs.websites-order-service-offers :refer :all]
            [inter-server-management-api.specs.websites-order-packges :refer :all]
            )
  (:import (java.io File)))


(def websites-order-data
  {
   (ds/req :step) string?
   (ds/req :website) string?
   (ds/req :period) int?
   (ds/req :serviceOfferId) int?
   (ds/req :packages) websites-order-packages-spec
   (ds/req :enableDomainRegistering) boolean?
   (ds/req :jsonServices) websites-order-json-services-spec
   (ds/req :jsonServiceOffers) websites-order-json-service-offers-spec
   (ds/req :serviceTypes) websites-order-service-types-spec
   (ds/req :serviceOffers) websites-order-service-offers-spec
   (ds/opt :packges) websites-order-packges-spec
   })

(def websites-order-spec
  (ds/spec
    {:name ::websites-order
     :spec websites-order-data}))
