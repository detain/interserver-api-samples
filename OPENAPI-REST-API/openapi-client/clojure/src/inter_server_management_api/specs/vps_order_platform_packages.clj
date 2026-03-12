(ns inter-server-management-api.specs.vps-order-platform-packages
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-platform-packages-data
  {
   (ds/opt :kvm) float?
   (ds/opt :kvmstorage) float?
   (ds/opt :hyperv) float?
   })

(def vps-order-platform-packages-spec
  (ds/spec
    {:name ::vps-order-platform-packages
     :spec vps-order-platform-packages-data}))
