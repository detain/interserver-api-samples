(ns inter-server-management-api.specs.download-qs-backup-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def download-qs-backup-200-response-data
  {
   (ds/opt :text) string?
   (ds/opt :url) string?
   })

(def download-qs-backup-200-response-spec
  (ds/spec
    {:name ::download-qs-backup-200-response
     :spec download-qs-backup-200-response-data}))
