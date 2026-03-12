(ns inter-server-management-api.specs.backup-ip-info-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-ip-info-row-data
  {
   (ds/opt :desc) string?
   (ds/opt :value) string?
   })

(def backup-ip-info-row-spec
  (ds/spec
    {:name ::backup-ip-info-row
     :spec backup-ip-info-row-data}))
