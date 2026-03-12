(ns inter-server-management-api.specs.vps-order-templates-hyperv
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-order-templates-hyperv-windows :refer :all]
            )
  (:import (java.io File)))


(def vps-order-templates-hyperv-data
  {
   (ds/opt :windows) vps-order-templates-hyperv-windows-spec
   })

(def vps-order-templates-hyperv-spec
  (ds/spec
    {:name ::vps-order-templates-hyperv
     :spec vps-order-templates-hyperv-data}))
