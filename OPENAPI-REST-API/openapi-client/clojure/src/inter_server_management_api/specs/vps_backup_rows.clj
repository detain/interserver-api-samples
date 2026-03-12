(ns inter-server-management-api.specs.vps-backup-rows
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-backup-rows-data
  {
   })

(def vps-backup-rows-spec
  (ds/spec
    {:name ::vps-backup-rows
     :spec vps-backup-rows-data}))
