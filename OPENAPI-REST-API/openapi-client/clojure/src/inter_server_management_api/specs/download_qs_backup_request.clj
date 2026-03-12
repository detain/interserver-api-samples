(ns inter-server-management-api.specs.download-qs-backup-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def download-qs-backup-request-data
  {
   (ds/req :file) string?
   })

(def download-qs-backup-request-spec
  (ds/spec
    {:name ::download-qs-backup-request
     :spec download-qs-backup-request-data}))
