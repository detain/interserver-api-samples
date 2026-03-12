(ns inter-server-management-api.specs.server-order-field-label
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-order-field-label-data
  {
   (ds/opt :name) string?
   (ds/opt :active) int?
   })

(def server-order-field-label-spec
  (ds/spec
    {:name ::server-order-field-label
     :spec server-order-field-label-data}))
