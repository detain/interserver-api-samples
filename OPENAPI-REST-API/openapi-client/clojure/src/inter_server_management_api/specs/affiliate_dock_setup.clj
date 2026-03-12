(ns inter-server-management-api.specs.affiliate-dock-setup
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def affiliate-dock-setup-data
  {
   (ds/opt :affiliate_dock_title) string?
   (ds/opt :affiliate_dock_description) string?
   (ds/opt :referrer_coupon) string?
   })

(def affiliate-dock-setup-spec
  (ds/spec
    {:name ::affiliate-dock-setup
     :spec affiliate-dock-setup-data}))
