(ns inter-server-management-api.specs.home-details-modules-servers
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-details-modules-servers-data
  {
   (ds/opt :icon) string?
   (ds/opt :view_link) string?
   (ds/opt :heading) string?
   (ds/opt :buy_link) string?
   (ds/opt :list_link) string?
   })

(def home-details-modules-servers-spec
  (ds/spec
    {:name ::home-details-modules-servers
     :spec home-details-modules-servers-data}))
