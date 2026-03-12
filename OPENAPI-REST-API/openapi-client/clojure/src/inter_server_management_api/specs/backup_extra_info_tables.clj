(ns inter-server-management-api.specs.backup-extra-info-tables
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.backup-ip-info :refer :all]
            )
  (:import (java.io File)))


(def backup-extra-info-tables-data
  {
   (ds/opt :ip_info) backup-ip-info-spec
   })

(def backup-extra-info-tables-spec
  (ds/spec
    {:name ::backup-extra-info-tables
     :spec backup-extra-info-tables-data}))
