(ns inter-server-management-api.specs.vps-backup-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-backup-row-data
  {
   (ds/req :type) string?
   (ds/req :service) int?
   (ds/req :name) string?
   (ds/req :size) int?
   (ds/req :date) int?
   })

(def vps-backup-row-spec
  (ds/spec
    {:name ::vps-backup-row
     :spec vps-backup-row-data}))
