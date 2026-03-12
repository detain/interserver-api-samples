(ns inter-server-management-api.specs.website-backups
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def website-backups-data
  {
   })

(def website-backups-spec
  (ds/spec
    {:name ::website-backups
     :spec website-backups-data}))
