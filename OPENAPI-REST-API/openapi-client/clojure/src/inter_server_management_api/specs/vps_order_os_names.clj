(ns inter-server-management-api.specs.vps-order-os-names
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-os-names-data
  {
   (ds/opt :opensuse) string?
   (ds/opt :ubuntu) string?
   })

(def vps-order-os-names-spec
  (ds/spec
    {:name ::vps-order-os-names
     :spec vps-order-os-names-data}))
