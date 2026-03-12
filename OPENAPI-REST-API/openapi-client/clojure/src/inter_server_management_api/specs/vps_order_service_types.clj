(ns inter-server-management-api.specs.vps-order-service-types
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-order-service-types-32 :refer :all]
            )
  (:import (java.io File)))


(def vps-order-service-types-data
  {
   (ds/opt :32) vps-order-service-types-32-spec
   })

(def vps-order-service-types-spec
  (ds/spec
    {:name ::vps-order-service-types
     :spec vps-order-service-types-data}))
