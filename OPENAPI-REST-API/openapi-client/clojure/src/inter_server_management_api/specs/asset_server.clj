(ns inter-server-management-api.specs.asset-server
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.asset-server-cpu-inner :refer :all]
            [inter-server-management-api.specs.asset-server-cpu-inner :refer :all]
            [inter-server-management-api.specs.asset-server-cpu-inner :refer :all]
            [inter-server-management-api.specs.asset-server-cpu-inner :refer :all]
            )
  (:import (java.io File)))


(def asset-server-data
  {
   (ds/opt :id) int?
   (ds/opt :Region) string?
   (ds/opt :price) string?
   (ds/opt :CPU) (s/coll-of asset-server-cpu-inner-spec)
   (ds/opt :Memory) (s/coll-of asset-server-cpu-inner-spec)
   (ds/opt :Bandwidth) (s/coll-of asset-server-cpu-inner-spec)
   (ds/opt :IPs) (s/coll-of asset-server-cpu-inner-spec)
   (ds/opt :HD) (s/map-of string? string?)
   })

(def asset-server-spec
  (ds/spec
    {:name ::asset-server
     :spec asset-server-data}))
