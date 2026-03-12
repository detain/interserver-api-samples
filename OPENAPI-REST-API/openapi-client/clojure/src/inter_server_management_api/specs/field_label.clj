(ns inter-server-management-api.specs.field-label
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def field-label-data
  {
   (ds/opt :name) string?
   (ds/opt :active) int?
   })

(def field-label-spec
  (ds/spec
    {:name ::field-label
     :spec field-label-data}))
