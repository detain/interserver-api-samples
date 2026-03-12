(ns inter-server-management-api.specs.server-order-form-values
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-order-form-values-data
  {
   (ds/opt :memory) int?
   (ds/opt :bandwidth) string?
   (ds/opt :ips) string?
   (ds/opt :os) string?
   (ds/opt :cp) int?
   (ds/opt :raid) string?
   (ds/opt :hd) string?
   })

(def server-order-form-values-spec
  (ds/spec
    {:name ::server-order-form-values
     :spec server-order-form-values-data}))
