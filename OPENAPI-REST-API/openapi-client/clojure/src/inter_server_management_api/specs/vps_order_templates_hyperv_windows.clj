(ns inter-server-management-api.specs.vps-order-templates-hyperv-windows
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-templates-hyperv-windows-data
  {
   (ds/opt :Windows2019Standard) string?
   (ds/opt :Windows2022) string?
   })

(def vps-order-templates-hyperv-windows-spec
  (ds/spec
    {:name ::vps-order-templates-hyperv-windows
     :spec vps-order-templates-hyperv-windows-data}))
