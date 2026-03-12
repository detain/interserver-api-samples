(ns inter-server-management-api.specs.vps-order-location-names
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-order-location-names-data
  {
   (ds/opt :3) string?
   })

(def vps-order-location-names-spec
  (ds/spec
    {:name ::vps-order-location-names
     :spec vps-order-location-names-data}))
