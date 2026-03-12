(ns inter-server-management-api.specs.vps-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-order-platform-packages :refer :all]
            [inter-server-management-api.specs.vps-order-platform-names :refer :all]
            [inter-server-management-api.specs.vps-order-package-costs :refer :all]
            [inter-server-management-api.specs.vps-order-location-stock :refer :all]
            [inter-server-management-api.specs.vps-order-location-names :refer :all]
            [inter-server-management-api.specs.vps-order-os-names :refer :all]
            [inter-server-management-api.specs.vps-order-templates :refer :all]
            [inter-server-management-api.specs.vps-order-service-types :refer :all]
            )
  (:import (java.io File)))


(def vps-order-data
  {
   (ds/req :vpsSliceSsdOvzCost) float?
   (ds/req :vpsSliceOvzCost) float?
   (ds/req :vpsSliceSsdVirtuozzoCost) float?
   (ds/req :vpsSliceVirtuozzoCost) float?
   (ds/req :vpsSliceHypervCost) float?
   (ds/req :vpsSliceVmwareCost) float?
   (ds/req :vpsSliceLxcCost) float?
   (ds/req :vpsSliceXenCost) float?
   (ds/req :vpsSliceKvmLCost) float?
   (ds/req :vpsSliceKvmStorageCost) float?
   (ds/req :vpsNyCost) float?
   (ds/req :vpsSliceKvmWCost) float?
   (ds/req :cpanelCost) float?
   (ds/req :daCost) float?
   (ds/req :ramSlice) string?
   (ds/req :hdSlice) string?
   (ds/req :hdStorageSlice) string?
   (ds/req :bwSlice) string?
   (ds/req :bwType) string?
   (ds/req :bwTotal) float?
   (ds/req :maxSlices) string?
   (ds/req :platformPackages) vps-order-platform-packages-spec
   (ds/req :platformNames) vps-order-platform-names-spec
   (ds/req :packageCosts) vps-order-package-costs-spec
   (ds/req :locationStock) vps-order-location-stock-spec
   (ds/req :locationNames) vps-order-location-names-spec
   (ds/req :osNames) vps-order-os-names-spec
   (ds/req :templates) vps-order-templates-spec
   (ds/req :serviceTypes) vps-order-service-types-spec
   (ds/req :currency) string?
   (ds/req :currencySymbol) string?
   })

(def vps-order-spec
  (ds/spec
    {:name ::vps-order
     :spec vps-order-data}))
