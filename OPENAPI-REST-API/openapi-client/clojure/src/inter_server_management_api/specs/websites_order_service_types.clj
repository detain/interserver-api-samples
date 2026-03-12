(ns inter-server-management-api.specs.websites-order-service-types
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.websites-order-service-types :refer :all]
            )
  (:import (java.io File)))


(def websites-order-service-types-data
  {
   (ds/req :11447) websites-order-service-types-spec
   })

(def websites-order-service-types-spec
  (ds/spec
    {:name ::websites-order-service-types
     :spec websites-order-service-types-data}))
