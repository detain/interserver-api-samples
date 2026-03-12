(ns inter-server-management-api.specs.website-backups-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def website-backups-inner-data
  {
   (ds/req :name) string?
   (ds/opt :size) int?
   })

(def website-backups-inner-spec
  (ds/spec
    {:name ::website-backups-inner
     :spec website-backups-inner-data}))
