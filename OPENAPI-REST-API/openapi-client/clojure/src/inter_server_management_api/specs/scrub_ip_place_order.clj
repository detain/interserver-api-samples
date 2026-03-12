(ns inter-server-management-api.specs.scrub-ip-place-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def scrub-ip-place-order-data
  {
   (ds/req :service_type) int?
   (ds/req :ip) string?
   })

(def scrub-ip-place-order-spec
  (ds/spec
    {:name ::scrub-ip-place-order
     :spec scrub-ip-place-order-data}))
