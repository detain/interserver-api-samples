(ns inter-server-management-api.specs.home-details-modules-backups
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-details-modules-backups-data
  {
   (ds/opt :icon) string?
   (ds/opt :view_link) string?
   (ds/opt :heading) string?
   (ds/opt :buy_link) string?
   (ds/opt :list_link) string?
   })

(def home-details-modules-backups-spec
  (ds/spec
    {:name ::home-details-modules-backups
     :spec home-details-modules-backups-data}))
