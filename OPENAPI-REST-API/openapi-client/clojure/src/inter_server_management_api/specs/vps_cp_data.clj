(ns inter-server-management-api.specs.vps-cp-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-cp-data-data
  {
   (ds/opt :name) string?
   (ds/opt :cost) int?
   })

(def vps-cp-data-spec
  (ds/spec
    {:name ::vps-cp-data
     :spec vps-cp-data-data}))
