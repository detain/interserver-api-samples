(ns inter-server-management-api.specs.vps-order-location-stock-1
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-location-stock-1-data
  {
   (ds/opt :kvm) boolean?
   (ds/opt :kvmstorage) boolean?
   (ds/opt :hyperv) boolean?
   })

(def vps-order-location-stock-1-spec
  (ds/spec
    {:name ::vps-order-location-stock-1
     :spec vps-order-location-stock-1-data}))
