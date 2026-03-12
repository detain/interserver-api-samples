(ns inter-server-management-api.specs.buy-it-now-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.buy-it-now-row-cpu-inner :refer :all]
            )
  (:import (java.io File)))


(def buy-it-now-row-data
  {
   (ds/opt :server_id) string?
   (ds/opt :cpu) (s/coll-of buy-it-now-row-cpu-inner-spec)
   (ds/opt :memory) string?
   (ds/opt :disk) (s/map-of string? string?)
   (ds/opt :bandwidth) string?
   (ds/opt :ips) string?
   (ds/opt :location) string?
   (ds/opt :price) int?
   })

(def buy-it-now-row-spec
  (ds/spec
    {:name ::buy-it-now-row
     :spec buy-it-now-row-data}))
