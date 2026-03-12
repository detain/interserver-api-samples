(ns inter-server-management-api.specs.vps-snapshot
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-snapshot-data
  {
   (ds/opt :name) string?
   (ds/opt :used) int?
   (ds/opt :date) int?
   })

(def vps-snapshot-spec
  (ds/spec
    {:name ::vps-snapshot
     :spec vps-snapshot-data}))
