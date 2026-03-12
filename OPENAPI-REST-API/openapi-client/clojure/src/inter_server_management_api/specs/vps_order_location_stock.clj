(ns inter-server-management-api.specs.vps-order-location-stock
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-order-location-stock-1 :refer :all]
            )
  (:import (java.io File)))


(def vps-order-location-stock-data
  {
   (ds/opt :1) vps-order-location-stock-1-spec
   })

(def vps-order-location-stock-spec
  (ds/spec
    {:name ::vps-order-location-stock
     :spec vps-order-location-stock-data}))
