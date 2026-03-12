(ns inter-server-management-api.specs.vps-order-platform-names
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-platform-names-data
  {
   (ds/opt :kvm) string?
   (ds/opt :kvmstorage) string?
   (ds/opt :hyperv) string?
   })

(def vps-order-platform-names-spec
  (ds/spec
    {:name ::vps-order-platform-names
     :spec vps-order-platform-names-data}))
