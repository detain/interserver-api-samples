(ns inter-server-management-api.specs.get-order-detail-200-response-ips-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def get-order-detail-200-response-ips-inner-data
  {
   (ds/opt :service_id) float?
   (ds/opt :service_module) string?
   (ds/opt :service_hostname) string?
   })

(def get-order-detail-200-response-ips-inner-spec
  (ds/spec
    {:name ::get-order-detail-200-response-ips-inner
     :spec get-order-detail-200-response-ips-inner-data}))
