(ns inter-server-management-api.specs.vps-service-extra
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-snapshot :refer :all]
            )
  (:import (java.io File)))


(def vps-service-extra-data
  {
   (ds/opt :spice) int?
   (ds/opt :snapshots) (s/coll-of vps-snapshot-spec)
   })

(def vps-service-extra-spec
  (ds/spec
    {:name ::vps-service-extra
     :spec vps-service-extra-data}))
