(ns inter-server-management-api.specs.backup-ip-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.backup-ip-info-row :refer :all]
            )
  (:import (java.io File)))


(def backup-ip-info-data
  {
   (ds/opt :title) string?
   (ds/opt :rows) (s/coll-of backup-ip-info-row-spec)
   })

(def backup-ip-info-spec
  (ds/spec
    {:name ::backup-ip-info
     :spec backup-ip-info-data}))
